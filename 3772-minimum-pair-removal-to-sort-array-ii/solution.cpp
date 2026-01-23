class Solution {
public:
    struct Node {
        long long sum;
        int idx;
        Node(long long s, int i) : sum(s), idx(i) {}
    };

    struct Cmp {
        bool operator()(const Node& a, const Node& b) const {
            if (a.sum != b.sum) return a.sum > b.sum;
            return a.idx > b.idx;
        }
    };

    int minimumPairRemoval(vector<int>& nums) {
        int n = nums.size();
        if (n <= 1) return 0;

        vector<long long> temp(n);
        vector<int> pre(n), next(n);
        vector<bool> remove(n, false);

        for (int i = 0; i < n; i++) {
            temp[i] = nums[i];
            pre[i] = i - 1;
            next[i] = (i + 1 < n ? i + 1 : -1);
        }

        priority_queue<Node, vector<Node>, Cmp> pq;
        for (int i = 0; i < n - 1; i++) {
            pq.push(Node(temp[i] + temp[i + 1], i));
        }

        int bad = 0;
        for (int i = 0; i < n - 1; i++) {
            if (temp[i] > temp[i + 1]) bad++;
        }

        int ops = 0;

        while (bad > 0 && !pq.empty()) {
            Node top = pq.top();
            pq.pop();

            int i = top.idx;
            long long sum = top.sum;

            if (remove[i] || next[i] == -1) continue;

            int j = next[i];
            if (remove[j]) continue;
            if (temp[i] + temp[j] != sum) continue;

            int left = pre[i];
            int right = next[j];

            if (left != -1 && temp[left] > temp[i]) bad--;
            if (temp[i] > temp[j]) bad--;
            if (right != -1 && temp[j] > temp[right]) bad--;

            temp[i] = sum;
            remove[j] = true;

            next[i] = right;
            if (right != -1) pre[right] = i;

            if (left != -1 && temp[left] > temp[i]) bad++;
            if (right != -1 && temp[i] > temp[right]) bad++;

            if (left != -1)
                pq.push(Node(temp[left] + temp[i], left));
            if (right != -1)
                pq.push(Node(temp[i] + temp[right], i));

            ops++;
        }

        return ops;
    }
};

