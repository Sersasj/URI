# -*- coding: utf-8 -*-

'''
Escreva a sua solução aqui
Code your solution here
Escriba su solución aquí
'''
from math import ceil

V, N = map(int, input().split())




total_placas = N*V



r1 = int(ceil((total_placas*10)/100))
r2 = int(ceil((total_placas*20)/100))
r3 = int(ceil((total_placas*30)/100))
r4 = int(ceil((total_placas*40)/100))
r5 = int(ceil((total_placas*50)/100))
r6 = int(ceil((total_placas*60)/100))
r7 = int(ceil((total_placas*70)/100))
r8 = int(ceil((total_placas*80)/100))
r9 = int(ceil((total_placas*90)/100))


print(r1, r2, r3, r4, r5, r6, r7, r8, r9)
