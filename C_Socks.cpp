//#include<iostream>
//using namespace std;
//
//int main()
//{
//	int n; //number of socks
//	int m; //number of days
//	int k; //number of available colors
//	int* c; //color of sock at index
//	int* pairs[2];
//
//	cin >> n >> m >> k;
//
//	c = new int[n];
//	pairs[0] = new int[m];
//	pairs[1] = new int[m];
//
//	for (int i = 0; i < n; i++)
//		cin >> c[i];
//
//	for (int i = 0; i < m; i++)
//		cin >> pairs[0][i] >> pairs[1][i];
//
//}

class Graph
{
	public:
		Graph(int sockCount, int dayCount);
		void colorChangeCount();
		void addNode();
	
	private:
		struct Node
		{
			int sockNumber;
			int color;
		};
		struct Edge
		{
			int verticies[2];
		};

		Node* node;
		Edge* edge;
};