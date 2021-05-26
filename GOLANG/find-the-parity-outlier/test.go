package main

import (
	"fmt"
)

func FindOutlier(integers []int) int {
    resOdd, resEven := 0, 0
    m := make(map[string] int)
    for _, v := range(integers){
        if v % 2 == 0{
            m["EVEN"]++
            resEven = v
        } else{
            m["ODD"]++
            resOdd = v
        }
    }

    if m["EVEN"] > 1{
        return resOdd
    } else if m["ODD"] > 1{
        return resEven
    }

    return 0xDEADBEEF
}

func main() {
	res := FindOutlier([]int{2, 6, 8, -10, 3}) //Should equal 3

	fmt.Println("Res: ", res)

}
