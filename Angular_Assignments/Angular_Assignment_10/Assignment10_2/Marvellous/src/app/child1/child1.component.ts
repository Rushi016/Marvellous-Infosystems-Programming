import { Component, provideZoneChangeDetection } from '@angular/core';
import { NumberService } from '../number.service';

@Component({
  selector: 'app-child1',
  standalone: true,
  imports: [],
  templateUrl: './child1.component.html',
  styleUrl: './child1.component.css'
})
export class Child1Component
{
  public str : string = "";
  public Value : number = 11;

  public constructor(private numobj : NumberService)
  {
    this.str = numobj.ChkPrime(this.Value);
  }
}
