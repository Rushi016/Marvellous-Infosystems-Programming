import { Component } from '@angular/core';
import { FormsModule } from '@angular/forms';
import { MyAddPipe } from './my-add.pipe';
import { MyMultPipe } from './my-mult.pipe';

@Component({
  selector: 'app-root',
  standalone: true,
  imports: [FormsModule,MyAddPipe,MyMultPipe],
  templateUrl: './app.component.html',
  styleUrl: './app.component.css'
})
export class AppComponent {
  public No1 : number = 0;
  public No2 : number = 0;
}
