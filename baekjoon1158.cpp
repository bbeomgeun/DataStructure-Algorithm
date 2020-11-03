#include <iostream>
#include <queue>

using namespace std;

int N, K;
queue<int> q;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> N >> K;

	for (int i = 1; i <= N; i++) {
		q.push(i);
	}
	cout << "<";
	for (int i = 0; i < N - 1; i++) {
		for (int j = 0; j < K - 1; j++) {
			q.push(q.front());
			q.pop();
		}
		cout << q.front() << ", ";
		q.pop();
	}

	cout <<q.front()<< ">";
}