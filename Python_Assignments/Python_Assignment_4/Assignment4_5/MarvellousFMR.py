def reduceX(Task,Data):
        Max = Data[0]
        for i in Data:
            No = Task(Max,i)
            Max = No
        return Max

def mapX(Task,Data):
    Result = list()
    for i in Data:
        No = Task(i)
        Result.append(No)

    return Result
    
def filterX(Task,Data):
    Result = list()
    for i in Data:
        No = Task(i)
        if No == True:
            Result.append(i)
    
    return Result