#python3

def doors():
	portas = []
	for i in range(100):
		portas.append("fechada")

	for i in range(1,100):
		for j in range(i-1,100,i):
			portas[j]=toogle(portas[j])
	print(portas)
		
def toogle(porta):
	if(porta== "fechada"):
		porta="aberta"
	else:
		porta= "fechada"
	return porta

doors()
