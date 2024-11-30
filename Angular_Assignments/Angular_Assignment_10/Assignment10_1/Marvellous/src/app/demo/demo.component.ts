import { Component } from '@angular/core';
import { ArithmeticService } from '../arithmetic.service';
import { FormsModule } from '@angular/forms';

@Component({
  selector: 'app-demo',
  standalone: true,
  imports: [FormsModule],
  templateUrl: './demo.component.html',
  styleUrl: './demo.component.css'
})
export class DemoComponent
{
  public Value1 : number = 32;
  public Value2 : number = 15;

  public Sum : number = 0;
  public Sub : number = 0;

  public constructor(private sobj : ArithmeticService)
  {
    this.Sum = sobj.Add(this.Value1, this.Value2);
    this.Sub = sobj.Sub(this.Value1, this.Value2);
  }
}
