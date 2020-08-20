<h2> C++공부 -  자료구조, 문제해결, 알고리즘 코드 기록 </h2>

<h4> Dynamic Programming(동적계획법) </h4>

 - 큰 문제의 해답에 그보다 작은 문제의 해답이 포함되어 있으면 <b>최적 부분 구조(Optimal SubStructure</b>를 가진다고 한다. 최적 부분 구조를 갖춘 문제의 예로 가장 대표적인 것이 피보나치 수열이다.
 - n번째 피보나치 수는 An = An-1 + An-2와 같이 구해지므로, 큰 문제 An에 작은 문제 An-2과 An-1이 포함되어 있기 때문이다.
 - 가장 간단하게 푸는 방법은 재귀함수를 이용하는 것이지만, 중복호출로 인해 매우 비효율적인 코드진행이 된다.
 - 이러한 어려움을 해결하기 위해 동적 프로그래밍을 사용하면 좋을듯 하다.
 
 1. 주어진 문제가 최적 부분 구조를 가진다.
 2. 재귀함수로 구현하기에는 비효율적이다.
 
 - 즉, An을 구할때 매번 계산하는 것이 아닌 메모리에 저장해두고, 마지막 An-1과 An-2 만을 호출해서 계산하는 것이다. 이를 <b> 메모이제이션(Memoization) </b>이라고 한다.
