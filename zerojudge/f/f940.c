#include <stdio.h>

int main() {
	printf("40");
	return 0;
}

// sno(站點代號)
// sna(中文場站名稱)
// tot(場站總停車格)
// sbi(可借車位數)
// sarea(中文場站區域)
// mday(資料更新時間)
// lat(緯度)
// lng(經度)
// ar(中文地址)
// sareaen(英文場站區域)
// snaen(英文場站名稱)
// aren(英文地址)
// bemp(可還空位數)
// act(場站是否暫停營運)

// package main

// import (
// 	"fmt"
// 	"io/ioutil"
// 	"net/http"
// )

// func main() {
// 	url := "https://data.ntpc.gov.tw/api/datasets/71CD1490-A2DF-4198-BEF1-318479775E8A/json?page=1&size=300"
// 	resp, err := http.Get(url)
// 	if err != nil {
// 		fmt.Println(err)
// 		return
// 	}
// 	defer resp.Body.Close()
// 	body, err := ioutil.ReadAll(resp.Body)
// 	if err != nil {
// 		fmt.Println(err)
// 		return
// 	}
// 	fmt.Println(string(body))
// }
