#include <vector>

template <typename Object, typename Comparator>
const Object & findMax( const std::vector<Object> & arr, Comparator isLessThan ) {
  int maxIndex = 0;
  for( int i = 1; i < arr.size( ); ++i ) {
    if( isLessThan( arr[ maxIndex ], arr[ i ] ) ) {
      maxIndex = i;
    }
  }
  return arr[ maxIndex ];
}