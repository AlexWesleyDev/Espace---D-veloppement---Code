
#Création du tableau
def tableau(n):
    T=[]
    for i in range(n):
        if(i%2==0): 
            T.append("V")
        else: 
            T.append("F")
    return T

#Affichage du tableau
def Affichage(T):
    print(T)
    return
        
#Création de la matrice
def Matrice(n):
    M=[[]]
    for i in range(n):
        for j in range(n):
            M.append(i+j)
    return M


## PRINCIPAL ###
n= int(input("Saisir la taille de la matrice : "))
T=[]
if(n>0):
    tableau(n,T)
    Affichage(T)