class StockSpanner:    
    def __init__(self):
        self.list = []
        
    def next(self, price):
        cnt = 1
        while self.list and self.list[-1][0] <= price:
            cnt += self.list[-1][1]
            self.list.pop()
        self.list.append((price, cnt))
        return cnt


# Your StockSpanner object will be instantiated and called as such:
# obj = StockSpanner()
# param_1 = obj.next(price)