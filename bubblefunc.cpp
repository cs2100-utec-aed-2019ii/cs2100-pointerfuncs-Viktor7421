/*------DECLARATIONS------*/
#include <iostream>
using namespace std;

/*_bubblesort_ con punteros a funcion*/
void * _bubblesort_(void * _array_, void (*_puntero_) (void *, int _i, int _k),int _tam_){
	int _k = 0;
	for (int i = 0; i < _tam_ ; i ++)
		for(int k = 0; k < _tam_-1; k++)
			_puntero_(_array_,k,i);
		return _array_;
}

/*------FUNCTIONS------*/

void  _b_int_ (void * _vector_, int _i,int _k){
    if( ((int *) _vector_)[_i] > ((int *) _vector_)[_k]){
        int temp = ((int *) _vector_)[_i];
        ((int *) _vector_)[_i] = ((int *) _vector_)[_k];
        ((int *) _vector_)[_k] = temp;
    }
}

void  _b_float_ (void * _vector_, int _i,int _k){
    float * _array_ = (float *) _vector_;
    if( _array_[_i] > _array_[_k]){
        int temp = _array_[_i];
        _array_[_i] = _array_[_k];
        _array_[_k] = temp;
    }
}

void  _b_double_ (void * _vector_, int _i,int _k){
    if( ((double *) _vector_)[_i] > ((double *) _vector_)[_k]){
        int temp = ((double *) _vector_)[_i];
        ((double *) _vector_)[_i] = ((double *) _vector_)[_k];
        ((double *) _vector_)[_k] = temp;
    }
}

void  _b_char_ (void * _vector_, int _i,int _k){
    if( ((char *) _vector_)[_i] > ((char *) _vector_)[_k]){
        int temp = ((char *) _vector_)[_i];
        ((char *) _vector_)[_i] = ((char *) _vector_)[_k];
        ((char *) _vector_)[_k] = temp;
    }
}



/*------MAIN------*/
int main(){
	int i = 0;
	int _array_1 [5] = {2,20,7,108,9};
	float _array_2 [5] = {4,5,9,7,2};
	double _array_3 [5] = {3.0,8.0,2.0,4.0,15.0};
	char _array_4 [6] = {'k','a','r','l','o','s'};

	_bubblesort_(_array_1,_b_int_,5);
	_bubblesort_(_array_2,_b_float_,5);
	_bubblesort_(_array_3,_b_double_,5);
	_bubblesort_(_array_4,_b_char_,6);


    for (int i = 0; i < 5 ; i ++){
        cout << _array_1[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < 5 ; i ++){
        cout << _array_2[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < 5 ; i ++){
        cout << _array_3[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < 6 ; i ++){
        cout << _array_4[i] << " ";
    }
    return 0;
}

