# copiez votre code ici
import pygame, sys
import time
from math import sqrt
from random import randint, choice
        
# Initialisation de la fenêtre pygame

LARGEUR = 650
HAUTEUR = 480
NB_BALLES = int(input("Nombre d'étoiles: "))

pygame.display.init()
fenetre = pygame.display.set_mode((LARGEUR, HAUTEUR))
fenetre.fill([0, 0, 0])

# Création d'une balle
def distance(x1, x2, y1, y2):
  return sqrt((x1-x2)**2+(y1-y2)**2)

class Balle_etoile:
    def __init__(self):
        self.x = randint(5,(LARGEUR - 5))
        self.y = randint(0, 50)
        self.dx = 0
        self.dy = 10

    def dessiner(self):
        pygame.draw.circle(fenetre,(255,255,255),(self.x,self.y),5)
        
    def bouger(self):
        self.y = self.y + self.dy # Cela concerne le déplacement des balles en verticale

      
class Balle:
   def __init__(self):
      self.abscisse=LARGEUR//2
      self.ordonnee=400
      self.image = pygame.image.load('image/vaisseau.png')
      self.rect = self.image.get_rect()
      self.rect.x = 300
      self.rect.y = 375
  
   def gauche(self):
      self.rect.x-=10

   def droite(self):
      self.rect.x+=10
  
pygame.display.init()
mon_sac_de_balle = []
for i in range(NB_BALLES):
  nouvelle_balle = Balle_etoile()
  mon_sac_de_balle.append(nouvelle_balle)
    
# Boucle infinie pour afficher la fenêtre et son contenu
background = pygame.image.load('image/banner.png')

player = Balle()
continuer = True
vie = 3
while continuer :
    # image du fond réinitialisée
    fenetre.blit(background,(0,0))
    fenetre.blit(player.image,player.rect)
    pygame.display.update()
    # construction de la balle dans la fenetre

    for e in mon_sac_de_balle:
      if e.y > HAUTEUR:
        e.x = randint(3,(LARGEUR - 3))
        e.y = randint(0, 50)

    for balle in mon_sac_de_balle:
          balle.dessiner()
          balle.bouger()
  
    for e in mon_sac_de_balle:
      for j in mon_sac_de_balle:
        if e != j:
          if distance(e.x, j.x, e.y, j.y)<25:
            e.x = randint(1,(LARGEUR - 3))
            e.y = randint(0, 50)

    for e in mon_sac_de_balle:
      if distance(e.x, player.rect.x, e.y, player.rect.y)<25:
        vie=vie-1
        e.x = randint(1,(LARGEUR - 3))
        e.y = randint(0, 20)
        print('Il vous reste', vie , 'vie' )
        if vie <= 0 :
          print("Vous avez perdu,votre vaisseaux c'est fait désintégrer")
          continuer = False
   # mise à jour de la fenêtre
    pygame.display.update()
    
    # routine pour pouvoir quiter la boucle while


    for event in pygame.event.get():
        if event.type == pygame.QUIT:
            launched = False

    keys=pygame.key.get_pressed()

    if keys[pygame.K_q]:
      player.gauche()
    if keys[pygame.K_d]:
      player.droite()

    # temps de pause à ajuster
    T = time.sleep(0.03)
    T
    pygame.display.flip() 
    
# Fermeture de la fenêtre (qui a donc lieu si on quitte la boucle while)

pygame.display.quit()
sys.exit()