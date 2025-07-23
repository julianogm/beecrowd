package main

import (
	"bufio"
	"fmt"
	"os"
	"math"
)

func main() {
	input := bufio.NewReader(os.Stdin)
	var A, B, C float64
	fmt.Fscanf(input, "%f %f %f", &A, &B, &C)

	delta := (B*B - 4*A*C)

	if A == 0 || delta < 0 {
		fmt.Println("Impossivel calcular")
	} else {
		delta = math.Sqrt(delta)
		x1 := (-B + delta) / (2 * A)
		x2 := (-B - delta) / (2 * A)
		fmt.Printf("R1 = %.5f\n", x1)
		fmt.Printf("R2 = %.5f\n", x2)
	}
}