package main

import (
	"fmt"
)

var count int

func anotherOne() func() int {
	i := 0
	count++
	if(count > 1) {
		fmt.Println("Lapsing function now...")
	} else {
		fmt.Println("Creating function now...")
	}
	return func() int {
		i++
		return i
	}
}

func main() {
	nextInt := anotherOne()
	fmt.Println(nextInt())
	fmt.Println(nextInt())
	fmt.Println(nextInt())

	nextnextInt := anotherOne()
	fmt.Println(nextnextInt())
	fmt.Println(nextnextInt())

	fmt.Println("The program ran successfully.")
}