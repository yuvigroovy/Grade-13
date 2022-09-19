public class Date {
    private int day;
    private int month;
    private int year;

    public Date(int day, int month, int year){
        this.day = day;
        this.month = month;
        this.year = year;
    }

    public Date(Date date){
        this.year = date.year;
        this.month = date.month;
        this.day = date.day;
    }

    public int getDay() {
        return day;
    }

    public int getMonth() {
        return month;
    }

    public int getYear() {
        return year;
    }

    public void setDay(int day) {
        this.day = day;
    }

    public void setMonth(int month) {
        this.month = month;
    }

    public void setYear(int year) {
        this.year = year;
    }

    public boolean isEarly(Date d){
        if(d.year < this.year)
            return false;
        else if(d.month < this.month)
            return false;
        else if (d.day < this.day)
            return false;
        return true;

//    }

    public String toString(){
        return this.day +"/"+ this.month+"/"+this.year;
    }
}
