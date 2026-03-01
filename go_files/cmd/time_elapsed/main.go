package main

import (
	"fmt"
	"time"
)

func main() {
	var n int = 100000
	unallocated_slice := []int{}
	preallocated_slice := make([]int, 0, n)
	fmt.Printf("The amount of time taken for the unallocated slice is %v\n", time_elapse(unallocated_slice, n))
	fmt.Printf("The amount of time taken for the preallocated slice is %v\n", time_elapse(preallocated_slice, n))
}

func time_elapse(testslice []int, n int) time.Duration {
	t0 := time.Now()
	for i:=0;i<n;i++ {
		testslice = append(testslice, i+1)
	}
	t := time.Since(t0)
	return t
}