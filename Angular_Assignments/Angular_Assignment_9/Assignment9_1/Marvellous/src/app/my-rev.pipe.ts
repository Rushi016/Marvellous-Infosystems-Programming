import { publishFacade } from '@angular/compiler';
import { Pipe, PipeTransform } from '@angular/core';

@Pipe({
  name: 'myRev',
  standalone: true
})
export class MyRevPipe implements PipeTransform {

  transform(value: unknown, ...args: unknown[]): unknown
  {
    let temp : string = "";
    let str = value;

    if (typeof str != 'string')
    {
      return str;
    }

    for(let i = str.length; i >= 0; i--)
    {
      temp = temp + str.charAt(i);
    }

    return temp;
  }

}
