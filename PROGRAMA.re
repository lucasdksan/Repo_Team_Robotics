# Variáveis para os sensores.

texto left = "sensor1"
texto leftOuter = "sensor2"

texto right = "sensor3"
texto rightOuter = "sensor4"

inicio
	farei{
		# As variáveis estão recebendo os valores dos sensores.
		left = cor(4)
		leftOuter = cor(5)

		right = cor(2)
		rightOuter = cor(1)

		# Condições para fazer a curva.
		se ((right != "BRANCO") e (left != "BRANCO")) entao {
			parar()
		} 
		se ((right == "BRANCO") e (left == "BRANCO")) entao{
			frente(150)
		}
		se ((right == "BRANCO") e (left != "BRANCO")) entao {
			se (leftOuter != "BRANCO") entao {
				frente(120)
				esperar(700)
				farei {
					right = cor(4)
					esquerda(150)
				} enquanto (right == "BRANCO")
			}
			senao{
				esquerda(50)
			}
		}
		se ((right != "BRANCO") e (left == "BRANCO")) entao {
			se (rightOuter != "BRANCO") entao {
				escrever(1,"Aqui")
				frente(150)
				esperar(700)
				farei {
					left = cor(2)
					direita(150)
				} enquanto(left == "BRANCO")
			}
			senao {
				direita(50)
			}
		}
		se (left == "VERDE") entao {
			frente(150)
			esperar(700)
			esquerda(600)
			esperar(3700)
		}
		se (right == "VERDE") entao {
			frente(150)
			esperar(700)
			direita(600)
			esperar(3700)
		}
	} enquanto (1 > 0)
fim