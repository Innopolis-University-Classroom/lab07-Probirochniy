
template <typename WhatKind>
void multiples (WhatKind& sum, WhatKind x, WhatKind n)
{
      for(int i = 1; i <= n; i++){
        sum += n*x;
      }
}
