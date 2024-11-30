import { Injectable } from '@angular/core';

@Injectable({
  providedIn: 'root'
})
export class NumberService
{
  constructor() { }

  public ChkPrime(No : number) : string
  {
    let iCnt = 0;
    
    for(let i = 1; i <= No; i++)
    {
      if(iCnt > 2)
      {
        break;
      }

      if((No % i) == 0)
      {
        iCnt++;
      }
    }

    if(iCnt < 2 || iCnt > 2)
    {
      return "It is NOT a prime number";
    }
    else
    {
      return "It is a prime number";
    }
  }
}
