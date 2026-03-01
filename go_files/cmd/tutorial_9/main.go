package main
// this piece is about the channels in the go language.

import (
	"fmt"
)

func main() {
	var c = make(chan int)
	go process(c)
	for _ = range 10 {
		fmt.Printf("%v ", <-c)
	}
	fmt.Println()
}

func process(c chan int) {
	for i :=  range 10 {
		c<-i
	}
} 