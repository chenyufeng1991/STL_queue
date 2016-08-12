//
//  main.cpp
//  STL_queue
//
//  Created by chenyufeng on 8/12/16.
//  Copyright © 2016 chenyufeng. All rights reserved.
//

#include <iostream>
#include <queue>

using namespace std;

int main(int argc, const char * argv[])
{
    queue<int> queue1;
    queue<int> queue2(queue1);

    queue1.push(2);
    queue1.push(4);
    queue1.push(6);

    cout << "队头元素为：" << queue1.front() << endl;
    cout << "队尾元素为：" << queue1.back() << endl;

    queue1.pop();

    cout << "队头元素为：" << queue1.front() << endl;
    cout << "队尾元素为：" << queue1.back() << endl;

    cout << "队列的长度为：" << queue1.size() << endl;
    cout << "队列是否为空：" << queue1.empty() << endl;

    return 0;
}
