import { Component } from '@angular/core';
import { NumberService } from '../number.service';
import { StringService } from '../string.service';

@Component({
  selector: 'app-child',
  standalone: true,
  imports: [],
  templateUrl: './child.component.html',
  styleUrl: './child.component.css'
})
export class ChildComponent
{
  public str1 : string = "MarveLLouS InFoSysTeM's";
  public value1 : number = 0;

  public str2 : string = "";
  public value2 : number = 11;

  public constructor(numobj : StringService, strobj : NumberService)
  {
    this.value1 = numobj.CountCapital(this.str1);
    this.str2 = strobj.ChkPrime(this.value2)
  }
}
