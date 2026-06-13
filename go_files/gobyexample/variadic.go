package main

import (
	"fmt"
)

func variablility(nums ...int) int {
	fmt.Printf("These are the numbers in the nums variable : %v\n", nums)
	var sum int
	for _, num := range nums {
		sum += num
	}
	return sum
}

func main() {
	var res0 int = variablility(1, 2, 3, 4, 5)
	var slice_matter []int = []int{1, 2, 3, 4, 5}

	fmt.Printf("This is the result as res0 : %v\n", res0)
	fmt.Printf("This is the result of slice_matter : %v\n", variablility(slice_matter...))

	fmt.Printf("This program ran successfully.\n")
}