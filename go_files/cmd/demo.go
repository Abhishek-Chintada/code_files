package main

import (
	"fmt"
	"strconv"
)

func main() {
	x := "1234"
	y, err := strconv.Atoi(x)
	if err != nil {
		fmt.Println("The following Error occurred!")
		fmt.Println(err)
		return
	}
	fmt.Printf("The result is: %v %T\n", y, y)
	// trying to use the parseint here in
	y1, err := strconv.ParseInt(x, 5, 32)
	if err != nil {
		fmt.Println("the following error occurred!")
		fmt.Println(err)
		return
	}
	fmt.Printf("The result is: %v %T\n", y1, y1)
}