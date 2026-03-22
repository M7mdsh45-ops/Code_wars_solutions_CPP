int quarter_of(int month){
  if (month <= 3)
    return 1 ;
  else if (month <= 6)
   return 2 ;
  else if (month <= 9)
   return 3 ;
  else if (month <= 12)
   return 4 ;
  return 0;
}
 // return month <= 3 ? 1 : month <= 6 ? 2 : month <= 9 ? 3 : 4 ;
