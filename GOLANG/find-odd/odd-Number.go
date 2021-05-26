package main

import "fmt"

func FindOdd(seq []int) int {
    var m = make(map[int]int)
    for _, v := range(seq){
        m[v]++
    }
    for k, v := range(m){
        if v % 2 != 0{
            return k
        }
    }

    return 0
}





func main(){
    v :=  []int {20,1,-1,2,-2,3,3,5,5,1,2,4,20,4,-1,-2,5}
    res := FindOdd(v)
    fmt.Println("Res: ", res)
}
