class Vehicle:

    def __init__(self,id,Cap,MaxCap,UseC):
        self._Id = id
        self._Capacity = Cap
        self._MaxCapapacity = MaxCap
        self._UseCost = UseC

    @property
    def Id(self):
        return self._Id

    @Id.setter
    def Id(self,id):
        self._Id = id

    @property
    def Capacity(self):
        return self._Capacity

    @Capacity.setter
    def Capacity(self,Cap):
        self._Capacity = Cap

    @property
    def MaxCapacity(self):
        return self._MaxCapacity

    @MaxCapacity.setter
    def MaxCapaity(self,MaxCap):
        self._MaxCapacity = MaxCap

    @property
    def UseCost(self):
        return self._UseCost

    @UseCost.setter
    def UseCost(self, UseC):
        self._UseCost = UseC

class Container:

    def __init__(self,id,MaxCap,x,y,type,combj):
        self._Id = id
        self._MaxCapacity = MaxCap
        self._X = x
        self._Y = y
        self._Link = False
        self._Combj = combj

    @property
    def Id(self):
        return self._Id

    @Id.setter
    def Id(self, id):
        self._Id = id

    @property
    def MaxCapacity(self):
        return self._MaxCapacity

    @MaxCapacity.setter
    def MaxCapaity(self,MaxCap):
        self._MaxCapacity = MaxCap

    @property
    def X(self):
        return self._X

    @X.setter
    def X(self, x):
        self._X = x

    @property
    def Y(self):
        return self._Y

    @Y.setter
    def Y(self, y):
        self._Y = y

    @property
    def Link(self):
        return self._Link

    @Link.setter
    def Link(self, link):
        self._Link = link

    @property
    def Type(self):
        return self._Type

    @Type.setter
    def Type(self, type):
        self._Type = type

    @property
    def Combj(self):
        return self._Combj

    @Combj.setter
    def Combj(self, combj):
        self._Combj = combj

class Deposit:

    def __init__(self,id,MaxC,x,y,ApCost,vehicles,contV):

        self._ID = id
        self._MaxCapacity = MaxC
        self._X = x
        self._Y = y
        self._ApertureCost = ApCost
        self._Vehicles = vehicles
        self._ContV = contV

    @property
    def ID(self):
        return self._ID

    @ID.setter
    def ID(self,id):
        self._ID = id

    @property
    def MaxCapaity(self):
        return self._MaxCapacity

    @MaxCapaity.setter
    def MaxCapaity(self,MaxCap):
        self._MaxCapacity = MaxCap

    @property
    def X(self):
