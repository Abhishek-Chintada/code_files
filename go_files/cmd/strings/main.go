package main

import (
	"fmt"
)

func main() {
	var mystring = "bhen ka bhosdha"
	for _, v := range mystring {
		fmt.Printf("%c", v)
	}
	fmt.Println()
}