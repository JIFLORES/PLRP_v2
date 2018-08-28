from Classes import *
from Print_functions import *
import csv
import sys


Clientes_T = {}

with open(sys.argv[1], newline='') as Clients:
    reader = csv.DictReader(Clients)
    for row in reader:
        ID = row['id_C']
        X = row['CX']
        Y = row['CY']
        Type = row['Tipo']
        MaxCapacity = row['CapacidadM']
        Combj = {}
        if (row['Lunes'] in (None, ""))!=False:
            Combj["Lunes"] = row['Lunes']

        if (row['Martes'] in (None, ""))!=False:
            Combj["Martes"] = row['Martes']

        if (row['Miercoles'] in (None, ""))!=False:
            Combj["Miercoles"] = row['Miercoles']

        if (row['Jueves'] in (None, ""))!=False:
            Combj["Jueves"] = row['Jueves']

        if (row['Viernes'] in (None, ""))!=False:
            Combj["Viernes"] = row['Viernes']

        if (row['Sabado'] in (None, ""))!=False:
            Combj["Sabado"] = row['Sabado']

        if (row['Domingo'] in (None, ""))!=False:
            Combj["Domingo"] = row['Domingo']

        C = Container(ID,MaxCapacity,X,Y,Type,Combj)
        Clientes_T[ID] = C
        Combj.clear()

with open(sys.argv[2], newline='') as Depots:
    reader = csv.DictReader(Depots)
    for row in reader:
        ID = row['id_D']
        X = row['CX']
        Y = row['CY']
        CA = row['CostoApertura']
        CV = row['CostoVehiculo']
        NV = int(row['V'])
        Vh = {}
        for i in (1,NV,1):
            IdV ="V_"+str(i)
            V = Vehicle(IdV, 0, 5000, CV)
            Vh[IdV] = V

        D = Deposit(IdV,10000, X,Y,CA,Vh,NV)


#Print_Containers(Clientes_T)
