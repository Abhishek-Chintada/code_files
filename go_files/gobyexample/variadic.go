package main

import "fmt"

func sum(nums ...int) {
	fmt.Println(nums, " ")
	total := 0
	for _, num := range nums {
		total += num
	}
	fmt.Println("The sum of the numbers is : ", total)
}

func main() {
	sum(1, 2)
	nums := []int{1, 2, 3}
	sum(nums...)
}