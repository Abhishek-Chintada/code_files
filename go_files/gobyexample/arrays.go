package main

import (
	"fmt"
)

func main(){
	twod := [2][3]int {
		{1, 2, 3},
		{4, 5, 6},
	}
	fmt.Println(twod)
	var two [2][3]int
	for i := range 2 {
		for j := range 3 {
			two[i][j] = i + j
		}
 	}
	fmt.Println(two)
}