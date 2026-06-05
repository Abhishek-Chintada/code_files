package main

import (
	"fmt"
)

func AppendByte(slice []byte, data ...byte) []byte {
	m := len(slice)
	n := m + len(data)
	if n > cap(slice) {
		// Make a new slice with greater capacity and copy contents.
		newSlice := make([]byte, m, n)
		copy(newSlice, slice)
		slice = newSlice
	}
	slice = slice[:cap(slice)]
	copy(slice[m:n], data)
	return slice
}

func main() {
	s := []byte{1, 2, 3}
	fmt.Println("slice : ", s, " len : ", len(s), " cap : ", cap(s))
	s = AppendByte(s, 2, 3, 4)
	fmt.Println("slice : ", s, " len : ", len(s), " cap : ", cap(s))
}