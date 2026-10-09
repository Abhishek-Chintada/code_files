package main

import (
	"fmt" ;
	"os";
	"io"
)

func CopyFile(dstName, srcName string) (written int64, err error) {
	src, err := os.Open(srcName)
	if err != nil {
		return
	}
	dst, err := os.Create(dstName)
	if err != nil {
		return
	}
	written, err = io.Copy(dst, src) 
	src.Close()
	dst.Close()
	return;
}

func main() {
	src := "labbe.txt"
	dst := "copied.txt"
	written, err := CopyFile(dst, src)
	if err != nil {
		fmt.Println("err : ", err)
		return
	}
	
}

