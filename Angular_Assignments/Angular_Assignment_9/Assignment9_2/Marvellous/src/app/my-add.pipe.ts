import { Pipe, PipeTransform } from '@angular/core';
import { ValueChangeEvent } from '@angular/forms';

@Pipe({
  name: 'myAdd',
  standalone: true
})
export class MyAddPipe implements PipeTransform {

  transform(value: unknown, ...args: unknown[]): unknown
  {
    let Value1 : any = value;
    let Value2 : any  = args[0];

    if(typeof Value1 == 'number' && typeof Value2 == 'number')
    {
      return Value1 + Value2;
    }

    return value;
  }
}
