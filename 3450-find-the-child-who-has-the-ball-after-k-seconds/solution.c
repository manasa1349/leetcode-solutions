int numberOfChild(int n, int k) {
    int direction_changes = k / (n - 1);
    int remaining_steps = k % (n - 1);
    if (direction_changes % 2 == 0){
        return remaining_steps;
    }else{
        return n - 1 - remaining_steps;
    }

}
