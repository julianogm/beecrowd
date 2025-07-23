package main

import (
	"fmt"
)

func main() {
	var n1, n2, n3, n4 float64
	var exame float64
	fmt.Scanf("%f %f %f %f", &n1, &n2, &n3, &n4)

	media := (n1*2 + n2*3 + n3*4 + n4) / 10.0

	if media >= 7.0 {
		fmt.Printf("Media: %.1f\nAluno aprovado.\n", media)
	} else if media < 5.0 {
		fmt.Printf("Media: %.1f\nAluno reprovado.\n", media)
	} else if media >= 5.0 && media < 7.0 {
		fmt.Printf("Media: %.1f\nAluno em exame.\n", media)
		fmt.Scanf("%f", &exame)
		media = (media + exame) / 2.0
		fmt.Printf("Nota do exame: %.1f\n", exame)
		if media >= 5.0 {
			fmt.Printf("Aluno aprovado.\n")
		} else {
			fmt.Printf("Aluno reprovado.\n")
		}
		fmt.Printf("Media final: %.1f\n", media)
	}
}