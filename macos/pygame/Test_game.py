import pygame
import sys
import os

pygame.init()

screen = pygame.display.set_mode((600, 480))

pygame.display.set_caption('Space Invaders')

# icon = pygame.image.load('ufo.png')
# pygame.display.set_icon(icon)
bg = pygame.image.load('background.png')

while True:
    pygame.display.update()
    for event in pygame.event.get():
        if event.type == pygame.QUIT:
            pygame.quit()
            sys.exit()
