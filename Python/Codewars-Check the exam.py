def check_exam(arr1,arr2):
    val = 0
    for i in range(len(arr1)):
        if(arr1[i] == arr2[i]):
            val += 4
        elif(arr2[i] == ""):
            continue
        else:
            val -= 1
    return val if val > 0 else 0 
  
