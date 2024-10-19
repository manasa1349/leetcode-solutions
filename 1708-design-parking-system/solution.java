public class ParkingSystem {
    int big,medium,small;
    ParkingSystem(int big, int medium, int small) {
        this.big=big;
        this.medium=medium;
        this.small=small;
    }
    boolean addCar(int carType) {
        if(carType==1){
            if(big>=1){
                big--;
                return true;
            }
        }
        if(carType==2){
            if(medium>=1){
                medium--;
                return true;
            }
        }
        if(carType==3){
            if(small>=1){
                small--;
                return true;
            }
        }
        return false;
    }
};

/**
 * Your ParkingSystem object will be instantiated and called as such:
 * ParkingSystem* obj = new ParkingSystem(big, medium, small);
 * bool param_1 = obj->addCar(carType);
 */
