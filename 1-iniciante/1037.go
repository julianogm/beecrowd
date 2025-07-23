package main

import (
	"bufio"
	"fmt"
	"os"
)

func main() {
	input := bufio.NewReader(os.Stdin)
	var n float64
	fmt.Fscanf(input, "%f", &n)

	if n < 0 || n > 100 {
		fmt.Println("Fora de intervalo")
	} else if n >= 0 && n <= 25 {
		fmt.Println("Intervalo [0,25]")
	} else if n > 25 && n <= 50 {
		fmt.Println("Intervalo (25,50]")
	} else if n > 50 && n <= 75 {
		fmt.Println("Intervalo (50,75]")
	} else {
		fmt.Println("Intervalo (75,100]")
	}
}