package main

import (
	"fmt"
)

func plus(a int, b int) int {
	return a + b
}

func plusplus(a int, b int, c int) int {
	return a + b + c
}

func main() {
	var a int = 12
	var b int = 34
	var c int = 56
	fmt.Printf("This is the result of plus : %v\n", plus(a, b))
	fmt.Printf("This is the result of plusplus : %v\n", plusplus(a, b, c))
	fmt.Println("The program ran successfully.")
}