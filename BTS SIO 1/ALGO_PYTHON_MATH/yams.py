from random import*
# Génère une liste de chiffres entre 1 et 6 correspondant au lancer de 5 dés.
def lancer():
    Tab=[randint(1,6) for i in range(5)]
    return Tab
# Gestion des différents combinaisons possibles
def Brelan(T):
    for i in range(1,7):
        if(T.count(i)==3): return True
    return False

def Carre(T):
    for i in range(1,7):
        if(T.count(i)==4): return True # Si le nombre d'occurences d'un chiffre
    return False                       # est de 4, c'est un carré.

def Full(T):
    if(Brelan(T)):
        for i in range(1,7):
            if(T.count(i)==2): return True
        return False
    else: return False

def PetiteSuite(T):
    T.sort()
    cpt=0
    for i in range(len(T)):
        if(i==3 or i==4): return True
        else:
            if(T[i]+1==T[i+1]):i+=1
            else:
                if(T[i]==T[i+1] and i==0):i+=1
                else: return False

def GrandeSuite(T):
    T.sort()
    if(PetiteSuite(T) & (T[0]<T[1])): return True
    return False

def Yams(T):
    T.sort()
    if(Carre): return T[0]==T[4]
    return False

#TEST
T=lancer()
cpt=0
while(not(Yams(T)) and cpt<10000):
    cpt+=1
    print(T,"\nYAMS ",Yams(T))
    T=lancer()
print(T,"\nYAMS ",Yams(T)," Essai(s) ",cpt)