#include<iostream>
#include<ios>
#include<iomanip>
#include<string>
#include<vector>
#include<algorithm>
#include<stdexcept>

using namespace std;

double median(vector<double> vec){
    typedef vector<double>::size_type vec_sz;
    vec_sz size = vec.size();

    if(size == 0){
        throw domain_error("median of an empty vector");
    }

    sort(vec.begin(),vec.end());
    vec_sz mid = size / 2;
    return size % 2 == 0 ? (vec[mid] + vec[mid - 1]) / 2 : vec[mid];
}

double grade(double midterm, double final, double homework){
    return 0.2*midterm + 0.4*final + 0.4*homework;
}

double grade(double midterm, double final, const vector<double>& hw){
    if (hw.size() == 0){
        throw domain_error("student has done no homework.");
    }

    return grade(midterm,final,median(hw));
}
void read_hw (istream& in, vector<double>& hw){
    
    if(in){
        hw.clear();
        double x;
        while(in >> x){
            hw.push_back(x);
        }
        in.clear();
    }
    
}

int main(){
    cout << "Please enter your first name : ";
    string name;
    cin >> name;
    cout << "Hello, " << name << endl;

    cout <<"Please enter your midterm and final exam grades: ";
    double midterm, final;
    cin >> midterm >> final;

    cout << "Enter all your homework grades. followed by end-of-file: ";
    vector<double> homework;

    read_hw(cin, homework); //과제 점수를 읽음
    try
    {

        double final_grade = grade(midterm,final,homework);
        streamsize prec = cout.precision();
        cout << "Your final grade is " << setprecision(3)<<final_grade<<setprecision(prec)<<endl;
    
    }catch(domain_error)
    {
        cout <<endl;
        cout << "you must enter your grades. please try agaain."  << endl;
        return 1;
    }

    return 0;

}