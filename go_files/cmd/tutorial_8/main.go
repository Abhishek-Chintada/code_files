// go routines kiddo!
package main

import (
	"fmt"
	"math/rand"
	"time"
	"sync"
)
var m = sync.Mutex{} // mutex means mutual exclusion.
// these mutexes make sure that all the data is appended to the results without skipping some data due to the concurrency which usually happens in go lang.
// // if these mutexes are not placed properly then the whole point of concurrency is wasted sometimes.
var dbdata = []string{"id1", "id2", "id3", "id4", "id5"}
var wg = sync.WaitGroup{}
var results_general = []string{}
var results_concurrent = []string{}
func main() {
	general_call()
	concurrent_call()
}

func dbcall_general(i int) {
	var delay float32 = rand.Float32()*2000
	time.Sleep(time.Duration(delay)*time.Millisecond)
	results_general = append(results_general, dbdata[i])
	fmt.Printf("The response from the database is : %v\n", dbdata[i])
}


func dbcall_concurrent(i int) {
	var delay float32 = rand.Float32()*2000
	time.Sleep(time.Duration(delay)*time.Millisecond)
	fmt.Printf("The response from the database is : %v\n", dbdata[i])
	m.Lock()
	results_concurrent = append(results_concurrent, dbdata[i])
	m.Unlock()
	wg.Done()
}


func general_call() {
	t0 := time.Now()
	for i := range len(dbdata) {
		dbcall_general(i)
	}
	fmt.Printf("The execution time of the general call is %v\n", time.Since(t0))
	fmt.Printf("The results of the general call are : %v\n", results_general)
}

func concurrent_call() {
	t1 := time.Now()
	for i := range dbdata {
		wg.Add(1)
		go dbcall_concurrent(i)
	}
	wg.Wait()
	fmt.Printf("The execution time of the concurrent call is %v\n", time.Since(t1))
	fmt.Printf("The results of the concurrent call are : %v\n", results_concurrent)
}