package main

import (
	"fmt"
)

func main() {
	i := 1
	for i <= 3 {
		fmt.Println(i)
		i = i + 1
	}
	
	for j := 0;j < 10; j++ {
		fmt.Println(j)
	}
	
	for k := range 10 {
		fmt.Println(k)
	}
	
	for {
		fmt.Println("loop")
		break
	}
	
	for n := range 6 {
		if n%2 == 0 {
			continue
		}
		fmt.Println(n)
	}
}