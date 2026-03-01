package main

import (
	"fmt"
	"sync"
	"time"
)
var wg = sync.WaitGroup{}
var m = sync.Mutex{}

func main() {
	t0 := time.Now()
	var results uint = 0
	for i:=0;i<1000000;i++ {
		wg.Add(1)
		count(&results)
	}
	wg.Wait()
	fmt.Printf("The total value of the results is : %v\n", results)
	fmt.Printf("The total time taken for the execution is %v\n", time.Since(t0))
}

func count(i *uint){
	m.Lock()
	*i++
	m.Unlock()
	wg.Done()
}