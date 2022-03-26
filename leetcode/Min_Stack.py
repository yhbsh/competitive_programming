class MinStack:
    def __init__(self):
        self.stack = []
        self.min_stack = []
                        
    def push(self, val: int) -> None:
        self.stack.append(val)
        if len(self.min_stack) != 0:
            val = min(self.min_stack[-1], val)
        self.min_stack.append(val)
            
    def pop(self) -> None:
        self.stack.pop()
        self.min_stack.pop()
                        
    def top(self) -> int:
        return self.stack[-1]
        
    def getMin(self) -> int:
        return self.min_stack[-1]
