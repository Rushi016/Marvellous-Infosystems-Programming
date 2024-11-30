import { Pipe, PipeTransform } from '@angular/core';

@Pipe({
  name: 'marvellousChk',
  standalone: true
})
export class MarvellousChkPipe implements PipeTransform
{
  transform(value: unknown, ...args: unknown[]): unknown
  {
    let No : any = value;
    let NumState : any = args[0]
    let iCnt : number = 0;
    let iSum : number = 0;
    let i : number = 0;

    if(typeof No == 'number' && No < 0)
    {
      No = -No;
    }

    if(typeof No == 'number' && NumState == 'Prime')
    {
      for(i = 0; i <= No; i++)
      {
        if((No % i) == 0)
        {
          iCnt++;
        }
      }

      if(iCnt > 2 || iCnt < 2)
      {
        return "It is not Prime number"
      }
      else
      {
        return "It is Prime number"
      }
    }

    if(typeof No == 'number' && NumState == 'Perfect')
    {
      for(i = 0; i <= No/2; i++)
      {
        if(iSum > No)
        {
          break;
        }

        if((No % i) == 0)
        {
          iSum = iSum + i;
        }
      }

      if(iSum != No)
      {
        return "It is not Perfect number"
      }
      else
      {
        return "It is Perfect number"
      }
    }

    if(typeof No == 'number' && NumState == 'Even')
    {
      if((No % 2) != 0)
      {
        return "It is not Even number"
      }
      else
      {
        return "It is Even number"
      }
    }
    
    if(typeof No == 'number' && NumState == 'Odd')
    {
      if((No % 2) == 0)
      {
        return "It is not Odd number"
      }
      else
      {
        return "It is Odd number"
      }
    }
    return No;
  }
}
