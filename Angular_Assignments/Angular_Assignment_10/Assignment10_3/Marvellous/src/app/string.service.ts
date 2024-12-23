import { Injectable } from '@angular/core';

@Injectable({
  providedIn: 'root'
})
export class StringService
{
  constructor() { }

  public CountCapital(str : string) : number
  {
    let iCnt = 0;

    for(let i = 0; i < str.length; i++)
    {
      if(str.charAt(i) >= 'A' && str.charAt(i) <= 'Z')
      {
        iCnt++;
      }
    }

    return iCnt;
  }
}
