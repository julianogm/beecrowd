package main

import (
	"bufio"
	"fmt"
	"os"
)

func main() {
	input := bufio.NewReader(os.Stdin)
	var n, m int
	fmt.Fscanf(input, "%d %d", &n, &m)

	values := [5]float64{4.00, 4.50, 5.00, 2.00, 1.50}
	total := values[n-1] * float64(m)
	fmt.Printf("Total: R$ %.2f\n", total)
}